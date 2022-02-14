
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct proc {int dummy; } ;
struct cuse_data_chunk {scalar_t__ peer_ptr; scalar_t__ length; scalar_t__ local_ptr; } ;
struct cuse_client_command {scalar_t__ proc_refs; int cv; struct proc* proc_curr; TYPE_1__* client; } ;
struct TYPE_2__ {scalar_t__ ioctl_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,void*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct cuse_client_command *VAR_5,
    struct cuse_data_chunk *VAR_6, int VAR_7)
{
 struct proc *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_9 = VAR_6->peer_ptr - VAR_1;

 if (VAR_6->length > VAR_0)
  return (VAR_2);

 if (VAR_9 >= VAR_0)
  return (VAR_2);

 if ((VAR_9 + VAR_6->length) > VAR_0)
  return (VAR_2);

 VAR_8 = VAR_5->proc_curr;
 if (VAR_8 == ((void*)0))
  return (VAR_4);

 if (VAR_5->proc_refs < 0)
  return (VAR_3);

 VAR_5->proc_refs++;

 FUNC_3();

 if (VAR_7 == 0) {
  VAR_10 = FUNC_0(
      (void *)VAR_6->local_ptr,
      VAR_5->client->ioctl_buffer + VAR_9,
      VAR_6->length);
 } else {
  VAR_10 = FUNC_1(
      VAR_5->client->ioctl_buffer + VAR_9,
      (void *)VAR_6->local_ptr,
      VAR_6->length);
 }

 FUNC_2();

 VAR_5->proc_refs--;

 if (VAR_5->proc_curr == ((void*)0))
  FUNC_4(&VAR_5->cv);

 return (VAR_10);
}
