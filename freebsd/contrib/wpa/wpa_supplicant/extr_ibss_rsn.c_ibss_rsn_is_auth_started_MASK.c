
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibss_rsn_peer {int authentication_status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ibss_rsn_peer * VAR_2)
{
 return VAR_2->authentication_status &
        (VAR_0 | VAR_1);
}
