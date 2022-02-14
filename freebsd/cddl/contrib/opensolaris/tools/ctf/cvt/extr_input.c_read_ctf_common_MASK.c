
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int read_cb_f ;
typedef int Elf ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*,char*) ;
 int * FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int,int *,char*,char*,int *,void*,int) ;
 int FUNC_9 (int *,char*,char*,int *,void*,int) ;
 int FUNC_10 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_11(char *VAR_3, char *VAR_4, read_cb_f *VAR_5, void *VAR_6,
    int VAR_7)
{
 Elf *VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_1(3, "Reading %s (label %s)\n", VAR_3, (VAR_4 ? VAR_4 : "NONE"));

 (void) FUNC_5(VAR_1);

 if ((VAR_10 = FUNC_7(VAR_3, VAR_2)) < 0)
  FUNC_10("%s: Cannot open for reading", VAR_3);
 if ((VAR_8 = FUNC_2(VAR_10, VAR_0, ((void*)0))) == ((void*)0))
  FUNC_6(VAR_3, "Cannot read");

 switch (FUNC_4(VAR_8)) {
 case 129:
  VAR_9 = FUNC_8(VAR_10, VAR_8, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);
  break;

 case 128:
  VAR_9 = FUNC_9(VAR_8, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);
  break;

 default:
  FUNC_10("%s: Unknown elf kind %d\n", VAR_3, FUNC_4(VAR_8));
 }

 (void) FUNC_3(VAR_8);
 (void) FUNC_0(VAR_10);

 return (VAR_9);
}
