
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int,char*,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,scalar_t__,int ) ;
 char* FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char,size_t) ;
 char* FUNC_7 (int *,size_t,int,int,int,int ) ;
 scalar_t__ FUNC_8 (char*,size_t,int) ;
 int FUNC_9 (char*,size_t) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ,int,int) ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int ) ;
 size_t FUNC_12 (char const*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,char const*,size_t) ;

__attribute__((used)) static const char *
FUNC_15(const char *VAR_12, int VAR_13)
{
 char *VAR_14, *VAR_15 = VAR_0;
 const char *VAR_16 = ((void*)0);
 size_t VAR_17;
 int VAR_18, VAR_19;





 VAR_14 = FUNC_4(VAR_10);

 if (VAR_14 == ((void*)0))
  return ((void*)0);

 FUNC_6(VAR_14, 'x', VAR_10);

 VAR_18 = FUNC_10(VAR_11, VAR_4 | VAR_3, 0700);

 if (VAR_18 < 0) {
  FUNC_2(VAR_14);
  return "failed to open";
 }

 FUNC_0(FUNC_14(VAR_18, VAR_14, VAR_10) != -1, "write(2) failed: %s",
     FUNC_11(VAR_8));

 VAR_15 = FUNC_7(((void*)0), VAR_10, VAR_5 | VAR_6, VAR_1|VAR_2,
      VAR_18, 0);

 if (VAR_15 == VAR_0) {
  VAR_16 = "failed to map";
  goto out;
 }





 if (FUNC_3(VAR_18, VAR_9, VAR_7) != VAR_9) {
  VAR_16 = "failed to seek";
  goto out;
 }

 VAR_17 = FUNC_12(VAR_12);
 VAR_19 = FUNC_14(VAR_18, VAR_12, VAR_17);

 if (VAR_19 != (ssize_t)VAR_17) {
  VAR_16 = "failed to write garbage";
  goto out;
 }





 if (FUNC_8(VAR_15, VAR_10, VAR_13) != 0) {
  VAR_16 = "failed to msync";
  goto out;
 }

 if (FUNC_5(VAR_15 + VAR_9, VAR_12, VAR_17) != 0) {
  VAR_16 = "msync did not synchronize";
  goto out;
 }

out:
 FUNC_2(VAR_14);

 (void)FUNC_1(VAR_18);
 (void)FUNC_13(VAR_11);

 if (VAR_15 != VAR_0)
  (void)FUNC_9(VAR_15, VAR_10);

 return VAR_16;
}
