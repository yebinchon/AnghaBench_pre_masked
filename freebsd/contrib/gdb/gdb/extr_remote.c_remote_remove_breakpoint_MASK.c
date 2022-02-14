
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remote_state {int remote_packet_size; } ;
typedef int ULONGEST ;
struct TYPE_2__ {scalar_t__ support; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__*,int*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_1 (int ) ;
 struct remote_state* FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_10 (CORE_ADDR VAR_3, char *VAR_4)
{
  struct remote_state *VAR_5 = FUNC_2 ();
  int VAR_6;

  if (VAR_2[VAR_1].support != VAR_0)
    {
      char *VAR_7 = FUNC_1 (VAR_5->remote_packet_size);
      char *VAR_8 = VAR_7;

      *(VAR_8++) = 'z';
      *(VAR_8++) = '0';
      *(VAR_8++) = ',';

      VAR_3 = FUNC_7 (VAR_3);
      VAR_8 += FUNC_4 (VAR_8, (ULONGEST) VAR_3);
      FUNC_0 (&VAR_3, &VAR_6);
      FUNC_8 (VAR_8, ",%d", VAR_6);

      FUNC_6 (VAR_7);
      FUNC_3 (VAR_7, (VAR_5->remote_packet_size), 0);

      return (VAR_7[0] == 'E');
    }




  return FUNC_5 (VAR_3, VAR_4);

}
