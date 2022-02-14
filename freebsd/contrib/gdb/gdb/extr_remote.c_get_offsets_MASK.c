
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct section_offsets {int* offsets; } ;
struct remote_state {int remote_packet_size; } ;
struct TYPE_6__ {int num_sections; int section_offsets; } ;
typedef int CORE_ADDR ;


 size_t FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 struct remote_state* FUNC_7 () ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct section_offsets*,int ,int ) ;
 int FUNC_10 (TYPE_1__*,struct section_offsets*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static void
FUNC_14 (void)
{
  struct remote_state *VAR_1 = FUNC_7 ();
  char *VAR_2 = FUNC_4 (VAR_1->remote_packet_size);
  char *VAR_3;
  int VAR_4;
  CORE_ADDR VAR_5, VAR_6, VAR_7;
  struct section_offsets *VAR_8;

  FUNC_11 ("qOffsets");

  FUNC_8 (VAR_2, (VAR_1->remote_packet_size), 0);

  if (VAR_2[0] == '\000')
    return;

  if (VAR_2[0] == 'E')
    {
      FUNC_13 ("Remote failure reply: %s", VAR_2);
      return;
    }





  VAR_5 = VAR_6 = VAR_7 = 0;
  VAR_3 = VAR_2;
  VAR_4 = 0;

  if (FUNC_12 (VAR_3, "Text=", 5) == 0)
    {
      VAR_3 += 5;

      while (*VAR_3 && *VAR_3 != ';')
 VAR_5 = (VAR_5 << 4) + FUNC_6 (*VAR_3++);
    }
  else
    VAR_4 = 1;

  if (!VAR_4 && FUNC_12 (VAR_3, ";Data=", 6) == 0)
    {
      VAR_3 += 6;
      while (*VAR_3 && *VAR_3 != ';')
 VAR_6 = (VAR_6 << 4) + FUNC_6 (*VAR_3++);
    }
  else
    VAR_4 = 1;

  if (!VAR_4 && FUNC_12 (VAR_3, ";Bss=", 5) == 0)
    {
      VAR_3 += 5;
      while (*VAR_3 && *VAR_3 != ';')
 VAR_7 = (VAR_7 << 4) + FUNC_6 (*VAR_3++);
    }
  else
    VAR_4 = 1;

  if (VAR_4)
    FUNC_5 ("Malformed response to offset query, %s", VAR_2);

  if (VAR_0 == ((void*)0))
    return;

  VAR_8 = ((struct section_offsets *)
   FUNC_4 (FUNC_3 (VAR_0->num_sections)));
  FUNC_9 (VAR_8, VAR_0->section_offsets,
   FUNC_3 (VAR_0->num_sections));

  VAR_8->offsets[FUNC_2 (VAR_0)] = VAR_5;





  VAR_8->offsets[FUNC_1 (VAR_0)] = VAR_6;
  VAR_8->offsets[FUNC_0 (VAR_0)] = VAR_6;

  FUNC_10 (VAR_0, VAR_8);
}
