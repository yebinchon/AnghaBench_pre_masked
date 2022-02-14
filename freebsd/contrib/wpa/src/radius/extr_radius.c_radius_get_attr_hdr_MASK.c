
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg {scalar_t__* attr_pos; int buf; } ;
struct radius_attr_hdr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct radius_attr_hdr *
FUNC_1(struct radius_msg *VAR_0, int VAR_1)
{
 return (struct radius_attr_hdr *)
  (FUNC_0(VAR_0->buf) + VAR_0->attr_pos[VAR_1]);
}
