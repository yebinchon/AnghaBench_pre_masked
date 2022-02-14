
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipsec_iflist {int dummy; } ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipsec_iflist* VAR_2 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static struct ipsec_iflist *
FUNC_1(uint32_t VAR_3)
{

 return (&VAR_2[FUNC_0(&VAR_3, sizeof(VAR_3),
     VAR_0) & (VAR_1 - 1)]);
}
