
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static struct net_device *FUNC_1(struct pktgen_dev *VAR_2,
       const char *VAR_3)
{
 char VAR_4[VAR_0+5];
 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_3[VAR_5] != '@'; VAR_5++) {
  if (VAR_5 == VAR_0)
   break;

  VAR_4[VAR_5] = VAR_3[VAR_5];
 }
 VAR_4[VAR_5] = 0;

 return FUNC_0(&VAR_1, VAR_4);
}
