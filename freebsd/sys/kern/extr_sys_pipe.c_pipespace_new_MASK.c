
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct timeval {int dummy; } ;
struct TYPE_2__ {int cnt; int in; int out; int size; int * buffer; } ;
struct pipe {int pipe_state; TYPE_1__ pipe_buffer; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pipe*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pipe*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (struct timeval*,int*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *,int ,int *,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct pipe *VAR_11, int VAR_12)
{
 caddr_t VAR_13;
 int VAR_14, VAR_15, VAR_16;
 static int VAR_17 = 0;
 static struct timeval VAR_18;

 FUNC_0(!FUNC_4(FUNC_1(VAR_11)), ("pipespace: pipe mutex locked"));
 FUNC_0(!(VAR_11->pipe_state & VAR_2),
  ("pipespace: resize of direct writes not allowed"));
retry:
 VAR_15 = VAR_11->pipe_buffer.cnt;
 if (VAR_15 > VAR_12)
  VAR_12 = VAR_15;

 VAR_12 = FUNC_8(VAR_12);
 VAR_13 = (caddr_t) FUNC_10(VAR_7);

 VAR_14 = FUNC_9(VAR_7, ((void*)0), 0, (vm_offset_t *)&VAR_13, VAR_12, 0,
     VAR_4, VAR_5, VAR_5, 0);
 if (VAR_14 != VAR_1) {
  if ((VAR_11->pipe_buffer.buffer == ((void*)0)) &&
   (VAR_12 > VAR_3)) {
   VAR_12 = VAR_3;
   VAR_9++;
   goto retry;
  }
  if (VAR_11->pipe_buffer.buffer == ((void*)0)) {
   VAR_8++;
   if (FUNC_6(&VAR_18, &VAR_17, 1))
    FUNC_7("kern.ipc.maxpipekva exceeded; see tuning(7)\n");
  } else {
   VAR_10++;
  }
  return (VAR_0);
 }


 if (VAR_15 > 0) {
  if (VAR_11->pipe_buffer.in <= VAR_11->pipe_buffer.out) {
   VAR_16 = VAR_11->pipe_buffer.size - VAR_11->pipe_buffer.out;
   FUNC_3(&VAR_11->pipe_buffer.buffer[VAR_11->pipe_buffer.out],
    VAR_13, VAR_16);
   if ((VAR_15 - VAR_16) > 0)
    FUNC_3(VAR_11->pipe_buffer.buffer, &VAR_13[VAR_16],
     VAR_11->pipe_buffer.in);
  } else {
   FUNC_3(&VAR_11->pipe_buffer.buffer[VAR_11->pipe_buffer.out],
    VAR_13, VAR_15);
  }
 }
 FUNC_5(VAR_11);
 VAR_11->pipe_buffer.buffer = VAR_13;
 VAR_11->pipe_buffer.size = VAR_12;
 VAR_11->pipe_buffer.in = VAR_15;
 VAR_11->pipe_buffer.out = 0;
 VAR_11->pipe_buffer.cnt = VAR_15;
 FUNC_2(&VAR_6, VAR_11->pipe_buffer.size);
 return (0);
}
