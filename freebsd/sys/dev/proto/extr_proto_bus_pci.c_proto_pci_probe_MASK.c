
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (struct sbuf*) ;
 int FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*) ;
 struct sbuf* FUNC_10 () ;
 int FUNC_11 (struct sbuf*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_5)
{
 struct sbuf *VAR_6;

 if ((FUNC_5(VAR_5, VAR_2, 1) & VAR_1) != 0)
  return (VAR_0);

 VAR_6 = FUNC_10();
 FUNC_11(VAR_6, "%s%d:%d:%d:%d", VAR_4, FUNC_2(VAR_5),
     FUNC_1(VAR_5), FUNC_4(VAR_5), FUNC_3(VAR_5));
 FUNC_9(VAR_6);
 FUNC_0(VAR_5, FUNC_7(VAR_6));
 FUNC_8(VAR_6);
 return (FUNC_6(VAR_5, VAR_4, &VAR_3));
}
