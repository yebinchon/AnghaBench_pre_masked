
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg {struct radius_hdr* hdr; } ;
struct radius_hdr {int dummy; } ;



struct radius_hdr * FUNC_0(struct radius_msg *VAR_0)
{
 return VAR_0->hdr;
}
