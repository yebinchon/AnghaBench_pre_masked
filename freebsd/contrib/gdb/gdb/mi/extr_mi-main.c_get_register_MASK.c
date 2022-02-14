
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_stream {int stream; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int,int*,int*,int *,int*,char*) ;
 int FUNC_6 (char*,char*,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,char*,unsigned char) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,struct ui_stream*) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (struct ui_stream*) ;
 struct ui_stream* FUNC_13 (int ) ;
 int VAR_7 ;
 int FUNC_14 (int ,char*,int ,int ,int ,int,int,int ,int ) ;
 int FUNC_15 (int *,char*) ;

__attribute__((used)) static int
FUNC_16 (int VAR_8, int VAR_9)
{
  char VAR_10[VAR_1];
  char VAR_11[VAR_1];
  int VAR_12;
  int VAR_13;
  CORE_ADDR VAR_14;
  enum lval_type VAR_15;
  static struct ui_stream *VAR_16 = ((void*)0);

  VAR_16 = FUNC_13 (VAR_7);

  if (VAR_9 == 'N')
    VAR_9 = 0;

  FUNC_5 (VAR_5, VAR_8, &VAR_12, &VAR_15, &VAR_14,
    &VAR_13, VAR_10);

  if (VAR_12)
    {
      FUNC_15 (&VAR_6, "Optimized out");
      return -1;
    }



  if (FUNC_1 ()
      && FUNC_0 (VAR_8))
    {
      FUNC_2 (VAR_8,
       FUNC_7 (VAR_4, VAR_8),
       VAR_10, VAR_11);
    }
  else
    FUNC_6 (VAR_11, VAR_10, FUNC_4 (VAR_8));

  if (VAR_9 == 'r')
    {
      int VAR_17;
      char *VAR_18, VAR_19[1024];

      FUNC_9 (VAR_19, "0x");
      VAR_18 = VAR_19 + 2;
      for (VAR_17 = 0; VAR_17 < FUNC_3 (VAR_8); VAR_17++)
 {
   int VAR_20 = VAR_2 == VAR_0 ? VAR_17
   : FUNC_3 (VAR_8) - 1 - VAR_17;
   FUNC_8 (VAR_18, "%02x", (unsigned char) VAR_10[VAR_20]);
   VAR_18 += 2;
 }
      FUNC_11 (VAR_7, "value", VAR_19);

    }
  else
    {
      FUNC_14 (FUNC_7 (VAR_4, VAR_8), VAR_11, 0, 0,
   VAR_16->stream, VAR_9, 1, 0, VAR_3);
      FUNC_10 (VAR_7, "value", VAR_16);
      FUNC_12 (VAR_16);
    }
  return 1;
}
