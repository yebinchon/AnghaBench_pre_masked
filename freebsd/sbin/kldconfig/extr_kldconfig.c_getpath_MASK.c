
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_4 (int ,scalar_t__,char*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 char *VAR_6;
 size_t VAR_7;

 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
 }

 if (VAR_3 == 0)
  FUNC_2();
 if (FUNC_4(VAR_2, VAR_3, ((void*)0), &VAR_7, ((void*)0), 0) == -1)
  FUNC_0(1, "getting path: sysctl(%s) - size only", VAR_5);
 if ((VAR_6 = FUNC_3(VAR_7 + 1)) == ((void*)0)) {
  VAR_1 = VAR_0;
  FUNC_0(1, "allocating %lu bytes for the path",
      (unsigned long)VAR_7+1);
 }
 if (FUNC_4(VAR_2, VAR_3, VAR_6, &VAR_7, ((void*)0), 0) == -1)
  FUNC_0(1, "getting path: sysctl(%s)", VAR_5);
 VAR_4 = VAR_6;
}
