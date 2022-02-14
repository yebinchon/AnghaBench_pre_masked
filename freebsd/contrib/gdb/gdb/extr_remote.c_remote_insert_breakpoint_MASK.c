
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct remote_state {int remote_packet_size; } ;
typedef int ULONGEST ;
struct TYPE_3__ {scalar_t__ support; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int*) ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 struct remote_state* FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (char*,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_1__* VAR_6 ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (scalar_t__,char*,int) ;
 int FUNC_11 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_12 (CORE_ADDR VAR_7, char *VAR_8)
{
  struct remote_state *VAR_9 = FUNC_2 ();



  int VAR_10;






  if (VAR_6[VAR_3].support != VAR_1)
    {
      char *VAR_11 = FUNC_1 (VAR_9->remote_packet_size);
      char *VAR_12 = VAR_11;

      VAR_7 = FUNC_8 (VAR_7);
      *(VAR_12++) = 'Z';
      *(VAR_12++) = '0';
      *(VAR_12++) = ',';
      VAR_12 += FUNC_4 (VAR_12, (ULONGEST) VAR_7);
      FUNC_0 (&VAR_7, &VAR_10);
      FUNC_9 (VAR_12, ",%d", VAR_10);

      FUNC_7 (VAR_11);
      FUNC_3 (VAR_11, (VAR_9->remote_packet_size), 0);

      switch (FUNC_6 (VAR_11, &VAR_6[VAR_3]))
 {
 case 130:
   return -1;
 case 129:
   return 0;
 case 128:
   break;
 }
    }
  return FUNC_5 (VAR_7, VAR_8);

}
