
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct p2p_message {TYPE_2__* wfd_subelems; } ;
struct TYPE_4__ {TYPE_3__* wfd_subelems; } ;
struct p2p_device {TYPE_1__ info; } ;
struct TYPE_6__ {scalar_t__ used; int buf; } ;
struct TYPE_5__ {scalar_t__ used; int buf; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct p2p_device *VAR_0,
         const struct p2p_message *VAR_1)
{
 if (VAR_0->info.wfd_subelems && VAR_1->wfd_subelems) {
  if (VAR_0->info.wfd_subelems->used != VAR_1->wfd_subelems->used)
   return 1;

  return FUNC_0(VAR_0->info.wfd_subelems->buf,
     VAR_1->wfd_subelems->buf,
     VAR_0->info.wfd_subelems->used);
 }
 if (VAR_0->info.wfd_subelems || VAR_1->wfd_subelems)
  return 1;

 return 0;
}
