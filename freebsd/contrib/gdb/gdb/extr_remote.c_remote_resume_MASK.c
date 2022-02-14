
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct remote_state {int remote_packet_size; } ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef int ULONGEST ;
struct TYPE_4__ {scalar_t__ support; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 struct remote_state* FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 void* FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13 (ptid_t VAR_9, int VAR_10, enum target_signal VAR_11)
{
  struct remote_state *VAR_12 = FUNC_2 ();
  char *VAR_13 = FUNC_1 (VAR_12->remote_packet_size);
  int VAR_14 = FUNC_0 (VAR_9);
  char *VAR_15;

  VAR_3 = VAR_11;
  VAR_4 = VAR_10;



  if (&FUNC_11)
    FUNC_11) ();


  if (FUNC_7 (VAR_9, VAR_10, VAR_11))
    return;


  if (VAR_14 == -1)
    FUNC_8 (0, 0);
  else
    FUNC_8 (VAR_14, 0);






  if (VAR_10 && VAR_7)
    {






      if (VAR_11 != VAR_2)
 {
   if (VAR_5.support != VAR_0)
     {
       VAR_15 = VAR_13;
       *VAR_15++ = 'E';
       *VAR_15++ = FUNC_12 (((int) VAR_11 >> 4) & 0xf);
       *VAR_15++ = FUNC_12 (((int) VAR_11) & 0xf);
       *VAR_15++ = ',';
       VAR_15 += FUNC_4 (VAR_15, (ULONGEST) VAR_8);
       *VAR_15++ = ',';
       VAR_15 += FUNC_4 (VAR_15, (ULONGEST) VAR_7);
       *VAR_15++ = 0;

       FUNC_6 (VAR_13);
       FUNC_3 (VAR_13, (VAR_12->remote_packet_size), 0);

       if (FUNC_5 (VAR_13, &VAR_5) == VAR_1)
  return;
     }
 }
      else
 {
   if (VAR_6.support != VAR_0)
     {
       VAR_15 = VAR_13;
       *VAR_15++ = 'e';
       VAR_15 += FUNC_4 (VAR_15, (ULONGEST) VAR_8);
       *VAR_15++ = ',';
       VAR_15 += FUNC_4 (VAR_15, (ULONGEST) VAR_7);
       *VAR_15++ = 0;

       FUNC_6 (VAR_13);
       FUNC_3 (VAR_13, (VAR_12->remote_packet_size), 0);

       if (FUNC_5 (VAR_13, &VAR_6) == VAR_1)
  return;
     }
 }
    }

  if (VAR_11 != VAR_2)
    {
      VAR_13[0] = VAR_10 ? 'S' : 'C';
      VAR_13[1] = FUNC_12 (((int) VAR_11 >> 4) & 0xf);
      VAR_13[2] = FUNC_12 (((int) VAR_11) & 0xf);
      VAR_13[3] = '\0';
    }
  else
    FUNC_9 (VAR_13, VAR_10 ? "s" : "c");

  FUNC_6 (VAR_13);
}
