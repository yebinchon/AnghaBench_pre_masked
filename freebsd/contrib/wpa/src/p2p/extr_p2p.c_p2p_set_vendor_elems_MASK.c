
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct p2p_data {struct wpabuf** vendor_elem; } ;



void FUNC_0(struct p2p_data *VAR_0, struct wpabuf **VAR_1)
{
 VAR_0->vendor_elem = VAR_1;
}
