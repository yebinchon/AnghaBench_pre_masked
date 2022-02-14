
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * ifalias; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t,int ) ;
 int FUNC_3 (int *,char const*,size_t) ;

int FUNC_4(struct net_device *VAR_4, const char *VAR_5, size_t VAR_6)
{
 FUNC_0();

 if (VAR_6 >= VAR_3)
  return -VAR_0;

 if (!VAR_6) {
  if (VAR_4->ifalias) {
   FUNC_1(VAR_4->ifalias);
   VAR_4->ifalias = ((void*)0);
  }
  return 0;
 }

 VAR_4->ifalias = FUNC_2(VAR_4->ifalias, VAR_6 + 1, VAR_2);
 if (!VAR_4->ifalias)
  return -VAR_1;

 FUNC_3(VAR_4->ifalias, VAR_5, VAR_6+1);
 return VAR_6;
}
