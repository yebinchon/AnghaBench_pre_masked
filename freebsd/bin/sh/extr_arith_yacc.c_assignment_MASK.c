
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union yystype {int name; } ;
typedef int sresult ;
typedef int arith_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,union yystype*,int,int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,int,char*,int ) ;
 int FUNC_6 () ;
 union yystype VAR_5 ;

__attribute__((used)) static arith_t FUNC_7(int VAR_6, int VAR_7)
{
 union yystype VAR_8 = VAR_5;
 int VAR_9 = FUNC_6();
 arith_t VAR_10;
 char VAR_11[FUNC_0(VAR_10) + 1];

 if (VAR_6 != VAR_4)
  return FUNC_2(VAR_6, &VAR_8, VAR_9, VAR_7);

 if (VAR_9 != VAR_0 && (VAR_9 < VAR_2 || VAR_9 >= VAR_1))
  return FUNC_2(VAR_6, &VAR_8, VAR_9, VAR_7);

 VAR_10 = FUNC_7(FUNC_6(), VAR_7);
 if (VAR_7)
  return VAR_10;

 if (VAR_9 != VAR_0)
  VAR_10 = FUNC_3(VAR_9 - 11, FUNC_1(VAR_8.name), VAR_10);
 FUNC_5(VAR_11, sizeof(VAR_11), VAR_3, VAR_10);
 FUNC_4(VAR_8.name, VAR_11, 0);
 return VAR_10;
}
