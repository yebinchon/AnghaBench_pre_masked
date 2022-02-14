
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {scalar_t__* vendor_elem; scalar_t__ wfd_ie_probe_req; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

size_t FUNC_1(struct p2p_data *VAR_1)
{
 size_t VAR_2 = 100;






 if (VAR_1 && VAR_1->vendor_elem &&
     VAR_1->vendor_elem[VAR_0])
  VAR_2 += FUNC_0(VAR_1->vendor_elem[VAR_0]);

 return VAR_2;
}
