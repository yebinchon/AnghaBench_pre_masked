
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipsec_iflist {int dummy; } ;


 int FUNC_0 (struct ipsec_iflist*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipsec_iflist* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static struct ipsec_iflist *
FUNC_2(void)
{
 struct ipsec_iflist *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(sizeof(struct ipsec_iflist) * VAR_0,
     VAR_1, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(&VAR_3[VAR_4]);

 return (VAR_3);
}
