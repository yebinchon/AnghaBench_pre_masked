
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct TYPE_4__ {scalar_t__ cnt; } ;
struct TYPE_3__ {scalar_t__ cnt; } ;
struct pipe {int pipe_state; TYPE_2__ pipe_map; TYPE_1__ pipe_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pipe*,int ) ;
 int FUNC_2 (struct pipe*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct pipe*,int ,int,char*,int ) ;
 int FUNC_4 (struct pipe*,struct uio*) ;
 int FUNC_5 (struct pipe*) ;
 int FUNC_6 (struct pipe*) ;
 int FUNC_7 (struct pipe*,int) ;
 int FUNC_8 (struct pipe*) ;
 int FUNC_9 (struct pipe*) ;
 int FUNC_10 (struct pipe*) ;

__attribute__((used)) static int
FUNC_11(struct pipe *VAR_10, struct uio *VAR_11)
{
 int VAR_12;

retry:
 FUNC_1(VAR_10, VAR_3);
 VAR_12 = FUNC_7(VAR_10, 1);
 if (VAR_12 != 0)
  goto error1;
 if ((VAR_10->pipe_state & VAR_6) != 0) {
  VAR_12 = VAR_1;
  FUNC_9(VAR_10);
  goto error1;
 }
 if (VAR_10->pipe_state & VAR_5) {
  if (VAR_10->pipe_state & VAR_7) {
   VAR_10->pipe_state &= ~VAR_7;
   FUNC_10(VAR_10);
  }
  FUNC_8(VAR_10);
  VAR_10->pipe_state |= VAR_8;
  FUNC_9(VAR_10);
  VAR_12 = FUNC_3(VAR_10, FUNC_2(VAR_10),
      VAR_9 | VAR_4, "pipdww", 0);
  if (VAR_12)
   goto error1;
  else
   goto retry;
 }
 if (VAR_10->pipe_buffer.cnt > 0) {
  if (VAR_10->pipe_state & VAR_7) {
   VAR_10->pipe_state &= ~VAR_7;
   FUNC_10(VAR_10);
  }
  FUNC_8(VAR_10);
  VAR_10->pipe_state |= VAR_8;
  FUNC_9(VAR_10);
  VAR_12 = FUNC_3(VAR_10, FUNC_2(VAR_10),
      VAR_9 | VAR_4, "pipdwc", 0);
  if (VAR_12)
   goto error1;
  else
   goto retry;
 }

 VAR_12 = FUNC_4(VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_9(VAR_10);
  goto error1;
 }

 while (VAR_10->pipe_map.cnt != 0 &&
     (VAR_10->pipe_state & VAR_6) == 0) {
  if (VAR_10->pipe_state & VAR_7) {
   VAR_10->pipe_state &= ~VAR_7;
   FUNC_10(VAR_10);
  }
  FUNC_8(VAR_10);
  VAR_10->pipe_state |= VAR_8;
  FUNC_9(VAR_10);
  VAR_12 = FUNC_3(VAR_10, FUNC_2(VAR_10), VAR_9 | VAR_4,
      "pipdwt", 0);
  FUNC_7(VAR_10, 0);
  if (VAR_12 != 0)
   break;
 }

 if ((VAR_10->pipe_state & VAR_6) != 0) {
  VAR_10->pipe_map.cnt = 0;
  FUNC_6(VAR_10);
  FUNC_8(VAR_10);
  VAR_12 = VAR_1;
 } else if (VAR_12 == VAR_0 || VAR_12 == VAR_2) {
  FUNC_5(VAR_10);
 } else {
  FUNC_6(VAR_10);
 }
 FUNC_9(VAR_10);
 FUNC_0((VAR_10->pipe_state & VAR_5) == 0,
     ("pipe %p leaked PIPE_DIRECTW", VAR_10));
 return (VAR_12);

error1:
 FUNC_10(VAR_10);
 return (VAR_12);
}
