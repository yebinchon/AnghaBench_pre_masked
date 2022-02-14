
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int isc_taskaction_t ;
struct TYPE_10__ {int * base; } ;
struct TYPE_11__ {int ev_destroy; int destroy; scalar_t__ attributes; scalar_t__ offset; scalar_t__ n; TYPE_2__ region; int bufferlist; int result; } ;
typedef TYPE_3__ isc_socketevent_t ;
struct TYPE_12__ {TYPE_1__* manager; } ;
typedef TYPE_4__ isc_socket_t ;
typedef int isc_eventtype_t ;
struct TYPE_9__ {int mctx; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int ,int ,void const*,int) ;

__attribute__((used)) static isc_socketevent_t *
FUNC_3(isc_socket_t *VAR_3, isc_eventtype_t VAR_4,
       isc_taskaction_t VAR_5, const void *VAR_6)
{
 isc_socketevent_t *VAR_7;

 VAR_7 = (isc_socketevent_t *)FUNC_2(VAR_3->manager->mctx,
           VAR_3, VAR_4,
           VAR_5, VAR_6,
           sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 VAR_7->result = VAR_0;
 FUNC_0(VAR_7, VAR_2);
 FUNC_1(VAR_7->bufferlist);
 VAR_7->region.base = ((void*)0);
 VAR_7->n = 0;
 VAR_7->offset = 0;
 VAR_7->attributes = 0;
 VAR_7->destroy = VAR_7->ev_destroy;
 VAR_7->ev_destroy = VAR_1;

 return (VAR_7);
}
