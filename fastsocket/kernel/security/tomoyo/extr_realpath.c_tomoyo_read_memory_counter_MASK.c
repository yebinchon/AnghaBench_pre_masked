
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {int read_eof; } ;
typedef int buffer ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct tomoyo_io_buffer*,char*,unsigned int const,...) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(struct tomoyo_io_buffer *VAR_5)
{
 if (!VAR_5->read_eof) {
  const unsigned int VAR_6
   = VAR_1;
  const unsigned int VAR_7
   = VAR_0;
  const unsigned int VAR_8
   = FUNC_0(&VAR_2);
  char VAR_9[64];

  FUNC_1(VAR_9, 0, sizeof(VAR_9));
  if (VAR_4)
   FUNC_2(VAR_9, sizeof(VAR_9) - 1,
     "   (Quota: %10u)",
     VAR_4);
  else
   VAR_9[0] = '\0';
  FUNC_3(VAR_5, "Shared:  %10u%s\n", VAR_6, VAR_9);
  if (VAR_3)
   FUNC_2(VAR_9, sizeof(VAR_9) - 1,
     "   (Quota: %10u)",
     VAR_3);
  else
   VAR_9[0] = '\0';
  FUNC_3(VAR_5, "Private: %10u%s\n", VAR_7, VAR_9);
  FUNC_3(VAR_5, "Dynamic: %10u\n", VAR_8);
  FUNC_3(VAR_5, "Total:   %10u\n",
     VAR_6 + VAR_7 + VAR_8);
  VAR_5->read_eof = 1;
 }
 return 0;
}
