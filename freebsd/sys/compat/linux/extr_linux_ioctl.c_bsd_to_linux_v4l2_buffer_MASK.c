
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; int userptr; } ;
struct TYPE_6__ {int tv_usec; int tv_sec; } ;
struct v4l2_buffer {scalar_t__ memory; int reserved; int input; int length; TYPE_4__ m; int sequence; int timecode; TYPE_2__ timestamp; int field; int flags; int bytesused; int type; int index; } ;
struct TYPE_7__ {int offset; int userptr; } ;
struct TYPE_5__ {int tv_usec; int tv_sec; } ;
struct l_v4l2_buffer {scalar_t__ memory; int reserved; int input; int length; TYPE_3__ m; int sequence; int timecode; TYPE_1__ timestamp; int field; int flags; int bytesused; int type; int index; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct v4l2_buffer *VAR_1, struct l_v4l2_buffer *VAR_2)
{
 VAR_2->index = VAR_1->index;
 VAR_2->type = VAR_1->type;
 VAR_2->bytesused = VAR_1->bytesused;
 VAR_2->flags = VAR_1->flags;
 VAR_2->field = VAR_1->field;
 VAR_2->timestamp.tv_sec = VAR_1->timestamp.tv_sec;
 VAR_2->timestamp.tv_usec = VAR_1->timestamp.tv_usec;
 FUNC_1(&VAR_2->timecode, &VAR_1->timecode, sizeof (VAR_1->timecode));
 VAR_2->sequence = VAR_1->sequence;
 VAR_2->memory = VAR_1->memory;
 if (VAR_1->memory == VAR_0)

  VAR_2->m.userptr = FUNC_0(VAR_1->m.userptr);
 else
  VAR_2->m.offset = VAR_1->m.offset;
 VAR_2->length = VAR_1->length;
 VAR_2->input = VAR_1->input;
 VAR_2->reserved = VAR_1->reserved;
 return (0);
}
