
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int * req_dev_types; scalar_t__ num_req_dev_types; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct p2p_data *VAR_0)
{
 VAR_0->num_req_dev_types = 0;
 FUNC_0(VAR_0->req_dev_types);
 VAR_0->req_dev_types = ((void*)0);
}
