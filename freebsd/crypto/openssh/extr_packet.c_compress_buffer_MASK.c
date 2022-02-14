
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sshbuf {int dummy; } ;
struct ssh {TYPE_1__* state; } ;
typedef int buf ;
struct TYPE_4__ {int avail_out; int * next_out; scalar_t__ avail_in; int * next_in; } ;
struct TYPE_3__ {int compression_out_started; int compression_out_failures; TYPE_2__ compression_out_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (struct sshbuf*) ;
 int * FUNC_2 (struct sshbuf*) ;
 int FUNC_3 (struct sshbuf*,int *,int) ;

__attribute__((used)) static int
FUNC_4(struct ssh *VAR_4, struct sshbuf *VAR_5, struct sshbuf *VAR_6)
{
 u_char VAR_7[4096];
 int VAR_8, VAR_9;

 if (VAR_4->state->compression_out_started != 1)
  return VAR_1;


 if (FUNC_1(VAR_5) == 0)
  return 0;


 if ((VAR_4->state->compression_out_stream.next_in =
     FUNC_2(VAR_5)) == ((void*)0))
  return VAR_1;
 VAR_4->state->compression_out_stream.avail_in = FUNC_1(VAR_5);


 do {

  VAR_4->state->compression_out_stream.next_out = VAR_7;
  VAR_4->state->compression_out_stream.avail_out = sizeof(VAR_7);


  VAR_9 = FUNC_0(&VAR_4->state->compression_out_stream,
      VAR_3);
  switch (VAR_9) {
  case 130:
   return VAR_0;
  case 129:

   if ((VAR_8 = FUNC_3(VAR_6, VAR_7, sizeof(VAR_7) -
       VAR_4->state->compression_out_stream.avail_out)) != 0)
    return VAR_8;
   break;
  case 128:
  default:
   VAR_4->state->compression_out_failures++;
   return VAR_2;
  }
 } while (VAR_4->state->compression_out_stream.avail_out == 0);
 return 0;
}
