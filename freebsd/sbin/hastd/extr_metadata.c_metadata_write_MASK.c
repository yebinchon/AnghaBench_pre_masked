
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nv {int dummy; } ;
struct hast_resource {scalar_t__ hr_role; scalar_t__ hr_previous_role; int hr_localfd; int hr_secondary_remotecnt; int hr_secondary_localcnt; int hr_primary_remotecnt; int hr_primary_localcnt; int hr_resuid; scalar_t__ hr_localoff; scalar_t__ hr_keepdirty; scalar_t__ hr_extentsize; scalar_t__ hr_datasize; int hr_name; } ;
struct ebuf {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 unsigned char* FUNC_2 (int,size_t) ;
 unsigned char* FUNC_3 (struct ebuf*,size_t*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (struct nv*,int ,char*) ;
 int FUNC_6 (struct nv*,int ,char*) ;
 int FUNC_7 (struct nv*,int ,char*) ;
 struct nv* FUNC_8 () ;
 scalar_t__ FUNC_9 (struct nv*) ;
 int FUNC_10 (struct nv*) ;
 struct ebuf* FUNC_11 (struct nv*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ,unsigned char*,size_t,int ) ;
 int FUNC_15 (scalar_t__) ;

int
FUNC_16(struct hast_resource *VAR_5)
{
 struct ebuf *VAR_6;
 struct nv *VAR_7;
 unsigned char *VAR_8, *VAR_9;
 size_t VAR_10;
 ssize_t VAR_11;
 int VAR_12;

 VAR_8 = FUNC_2(1, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_13("Unable to allocate %zu bytes for metadata.",
      (size_t)VAR_4);
  return (-1);
 }

 VAR_12 = -1;

 VAR_7 = FUNC_8();
 FUNC_5(VAR_7, VAR_5->hr_name, "resource");
 FUNC_7(VAR_7, (uint64_t)VAR_5->hr_datasize, "datasize");
 FUNC_6(VAR_7, (uint32_t)VAR_5->hr_extentsize, "extentsize");
 FUNC_6(VAR_7, (uint32_t)VAR_5->hr_keepdirty, "keepdirty");
 FUNC_7(VAR_7, (uint64_t)VAR_5->hr_localoff, "offset");
 FUNC_7(VAR_7, VAR_5->hr_resuid, "resuid");
 if (VAR_5->hr_role == VAR_1 ||
     VAR_5->hr_role == VAR_0) {
  FUNC_7(VAR_7, VAR_5->hr_primary_localcnt, "localcnt");
  FUNC_7(VAR_7, VAR_5->hr_primary_remotecnt, "remotecnt");
 } else {
  FUNC_0(VAR_5->hr_role == VAR_2);
  FUNC_7(VAR_7, VAR_5->hr_secondary_localcnt, "localcnt");
  FUNC_7(VAR_7, VAR_5->hr_secondary_remotecnt, "remotecnt");
 }
 FUNC_5(VAR_7, FUNC_15(VAR_5->hr_role), "prevrole");
 if (FUNC_9(VAR_7) != 0) {
  FUNC_13("Unable to create metadata.");
  goto end;
 }
 VAR_5->hr_previous_role = VAR_5->hr_role;
 VAR_6 = FUNC_11(VAR_7);
 FUNC_0(VAR_6 != ((void*)0));
 VAR_9 = FUNC_3(VAR_6, &VAR_10);
 FUNC_0(VAR_9 != ((void*)0));
 FUNC_0(VAR_10 < VAR_4);
 FUNC_1(VAR_9, VAR_8, VAR_10);
 VAR_11 = FUNC_14(VAR_5->hr_localfd, VAR_8, VAR_4, 0);
 if (VAR_11 == -1 || VAR_11 != VAR_4) {
  FUNC_12(VAR_3, "Unable to write metadata");
  goto end;
 }
 VAR_12 = 0;
end:
 FUNC_4(VAR_8);
 FUNC_10(VAR_7);
 return (VAR_12);
}
