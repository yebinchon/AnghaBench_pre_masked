
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int (* xmit ) (struct device*,void const*,size_t) ;} ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ pcap_t ;


 struct device* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,void const*,size_t) ;

__attribute__((used)) static int FUNC_2 (pcap_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
  struct device *VAR_3 = VAR_0 ? FUNC_0(VAR_0->fd) : ((void*)0);

  if (!VAR_3 || !VAR_3->xmit)
     return (-1);
  return (*VAR_3->xmit) (VAR_3, VAR_1, VAR_2);
}
