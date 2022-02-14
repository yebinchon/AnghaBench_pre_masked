
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int FUNC_0 (int ,size_t,char*,char const*,...) ;
 int FUNC_1 (int,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__,int ) ;
 int FUNC_6 (char*,char*,size_t) ;
 char* FUNC_7 (int *,size_t,int ,int ,int,scalar_t__) ;
 int FUNC_8 (char*,size_t) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (char*,scalar_t__,size_t) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(const char* VAR_6, int VAR_7, off_t VAR_8,
    size_t VAR_9)
{
 char *VAR_10, *VAR_11;
 off_t VAR_12, VAR_13;
 size_t VAR_14;
 int VAR_15;

 FUNC_2(VAR_6, "dest_file: ");

 VAR_15 = FUNC_9(VAR_6, VAR_2);
 FUNC_1(VAR_15 != -1, "open failed");

 VAR_12 = FUNC_4(VAR_15);
 VAR_13 = FUNC_4(VAR_7);






 VAR_14 = (VAR_9 == 0) ? (size_t)(VAR_13 - VAR_8) : VAR_9;

 FUNC_0(VAR_12, VAR_14,
     "number of bytes written out to %s (%ju) doesn't match the "
     "expected number of bytes (%zu)", VAR_6, VAR_12,
     VAR_14);

 FUNC_0(0, FUNC_5(VAR_7, VAR_8, VAR_4),
     "lseek failed: %s", FUNC_11(VAR_5));

 VAR_10 = FUNC_7(((void*)0), VAR_14, VAR_3, VAR_1, VAR_15, 0);
 FUNC_1(VAR_10 != VAR_0, "mmap failed: %s",
     FUNC_11(VAR_5));

 FUNC_10("Will mmap in the source file from offset=%jd to length=%zu\n",
     VAR_8, VAR_14);

 VAR_11 = FUNC_7(((void*)0), VAR_14, VAR_3, VAR_1, VAR_7, VAR_8);
 FUNC_1(VAR_11 != VAR_0, "mmap failed: %s",
     FUNC_11(VAR_5));

 FUNC_0(0, FUNC_6(VAR_11, VAR_10, VAR_14),
     "Contents of source and destination do not match. '%s' != '%s'",
     VAR_11, VAR_10);

 (void)FUNC_8(VAR_11, VAR_14);
 (void)FUNC_8(VAR_10, VAR_14);
 (void)FUNC_3(VAR_15);
}
