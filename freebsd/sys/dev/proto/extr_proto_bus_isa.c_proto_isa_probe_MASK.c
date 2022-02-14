
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_0 (int ,int,int*,int ) ;
 int FUNC_1 (int ,int,int,struct resource*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*) ;
 int FUNC_7 (struct sbuf*) ;
 struct sbuf* FUNC_8 () ;
 int FUNC_9 (struct sbuf*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct sbuf *VAR_7;
 struct resource *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = 0;
 VAR_10 = VAR_2;
 VAR_8 = FUNC_0(VAR_6, VAR_10, &VAR_9, VAR_1);
 if (VAR_8 == ((void*)0)) {
  VAR_10 = VAR_3;
  VAR_8 = FUNC_0(VAR_6, VAR_10, &VAR_9, VAR_1);
 }
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_8();
 FUNC_9(VAR_7, "%s:%#jx", VAR_5, FUNC_4(VAR_8));
 FUNC_7(VAR_7);
 FUNC_2(VAR_6, FUNC_5(VAR_7));
 FUNC_6(VAR_7);
 FUNC_1(VAR_6, VAR_10, VAR_9, VAR_8);
 return (FUNC_3(VAR_6, VAR_5, &VAR_4));
}
