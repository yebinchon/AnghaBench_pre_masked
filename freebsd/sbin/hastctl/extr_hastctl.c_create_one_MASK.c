
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hast_resource {char* hr_name; scalar_t__ hr_local_mediasize; size_t hr_localpath; scalar_t__ hr_local_sectorsize; scalar_t__ hr_localfd; scalar_t__ hr_localoff; scalar_t__ hr_keepdirty; scalar_t__ hr_extentsize; scalar_t__ hr_datasize; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 unsigned char* FUNC_1 (int,size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct hast_resource*) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (char*,size_t,...) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct hast_resource*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,unsigned char*,size_t,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(struct hast_resource *VAR_8, intmax_t VAR_9, intmax_t VAR_10,
    intmax_t VAR_11)
{
 unsigned char *VAR_12;
 size_t VAR_13;
 int VAR_14;

 VAR_14 = 0;
 FUNC_7("[%s] ", VAR_8->hr_name);

 if (FUNC_9(VAR_8, 1) == -1) {
  VAR_14 = VAR_2;
  goto end;
 }
 if (VAR_9 == 0)
  VAR_9 = VAR_8->hr_local_mediasize;
 else if (VAR_9 > VAR_8->hr_local_mediasize) {
  FUNC_6("Provided mediasize is larger than provider %s size.",
      VAR_8->hr_localpath);
  VAR_14 = VAR_0;
  goto end;
 }
 if (!FUNC_8(VAR_8->hr_local_sectorsize)) {
  FUNC_6("Sector size of provider %s is not power of 2 (%u).",
      VAR_8->hr_localpath, VAR_8->hr_local_sectorsize);
  VAR_14 = VAR_0;
  goto end;
 }
 if (VAR_10 == 0)
  VAR_10 = VAR_4;
 if (VAR_10 < VAR_8->hr_local_sectorsize) {
  FUNC_6("Extent size (%jd) is less than sector size (%u).",
      (intmax_t)VAR_10, VAR_8->hr_local_sectorsize);
  VAR_14 = VAR_0;
  goto end;
 }
 if ((VAR_10 % VAR_8->hr_local_sectorsize) != 0) {
  FUNC_6("Extent size (%jd) is not multiple of sector size (%u).",
      (intmax_t)VAR_10, VAR_8->hr_local_sectorsize);
  VAR_14 = VAR_0;
  goto end;
 }
 VAR_13 = FUNC_0(VAR_9 - VAR_7,
     VAR_10, VAR_8->hr_local_sectorsize);
 if (VAR_11 == 0)
  VAR_11 = VAR_5;
 VAR_8->hr_datasize = VAR_9 - VAR_7 - VAR_13;
 VAR_8->hr_extentsize = VAR_10;
 VAR_8->hr_keepdirty = VAR_11;

 VAR_8->hr_localoff = VAR_7 + VAR_13;

 if (FUNC_4(VAR_8) == -1) {
  VAR_14 = VAR_1;
  goto end;
 }
 VAR_12 = FUNC_1(1, VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_6("Unable to allocate %zu bytes of memory for initial bitmap.",
      VAR_13);
  VAR_14 = VAR_3;
  goto end;
 }
 if (FUNC_10(VAR_8->hr_localfd, VAR_12, VAR_13, VAR_7) !=
     (ssize_t)VAR_13) {
  FUNC_5(VAR_6, "Unable to store initial bitmap on %s",
      VAR_8->hr_localpath);
  FUNC_3(VAR_12);
  VAR_14 = VAR_1;
  goto end;
 }
 FUNC_3(VAR_12);
end:
 if (VAR_8->hr_localfd >= 0)
  FUNC_2(VAR_8->hr_localfd);
 FUNC_7("%s", "");
 return (VAR_14);
}
