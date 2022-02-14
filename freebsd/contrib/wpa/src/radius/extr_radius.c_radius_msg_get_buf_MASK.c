
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct radius_msg {struct wpabuf* buf; } ;



struct wpabuf * FUNC_0(struct radius_msg *VAR_0)
{
 return VAR_0->buf;
}
