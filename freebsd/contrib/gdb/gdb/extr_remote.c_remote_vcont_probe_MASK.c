
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6 (struct remote_state *VAR_1, char *VAR_2)
{
  FUNC_4 (VAR_2, "vCont?");
  FUNC_2 (VAR_2);
  FUNC_0 (VAR_2, VAR_1->remote_packet_size, 0);


  if (FUNC_5 (VAR_2, "vCont", 5) == 0)
    {
      char *VAR_3 = &VAR_2[5];
      int VAR_4, VAR_5, VAR_6, VAR_7;

      VAR_4 = 0;
      VAR_5 = 0;
      VAR_6 = 0;
      VAR_7 = 0;
      while (VAR_3 && *VAR_3 == ';')
 {
   VAR_3++;
   if (*VAR_3 == 's' && (*(VAR_3 + 1) == ';' || *(VAR_3 + 1) == 0))
     VAR_4 = 1;
   else if (*VAR_3 == 'S' && (*(VAR_3 + 1) == ';' || *(VAR_3 + 1) == 0))
     VAR_5 = 1;
   else if (*VAR_3 == 'c' && (*(VAR_3 + 1) == ';' || *(VAR_3 + 1) == 0))
     VAR_6 = 1;
   else if (*VAR_3 == 'C' && (*(VAR_3 + 1) == ';' || *(VAR_3 + 1) == 0))
     VAR_7 = 1;

   VAR_3 = FUNC_3 (VAR_3, ';');
 }



      if (!VAR_4 || !VAR_5 || !VAR_6 || !VAR_7)
 VAR_2[0] = 0;
    }

  FUNC_1 (VAR_2, &VAR_0);
}
