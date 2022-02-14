
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,size_t) ;
 scalar_t__ FUNC_2 (int,scalar_t__,int ) ;
 void* FUNC_3 (int *,size_t,int,int ,int,int ) ;
 int FUNC_4 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_5 (size_t VAR_6, int VAR_7)
{
  void *VAR_8;
  off_t VAR_9 = FUNC_2(VAR_7, 0, VAR_4);

  if (VAR_9 == (off_t) -1)
    FUNC_0 ("can't get position in PCH file: %m");



  if ((size_t) VAR_9 < VAR_6)
  {
    if ( FUNC_1 (VAR_7, VAR_6) == -1 )
      FUNC_0 ("can't extend PCH file: %m");
  }

  VAR_8 = FUNC_3 (((void*)0), VAR_6, VAR_2 | VAR_3, VAR_1, VAR_7, 0);

  if (VAR_8 == VAR_0)
    VAR_8 = ((void*)0);
  else
    FUNC_4 (VAR_8, VAR_6);

  if (FUNC_2 (VAR_7, VAR_9, VAR_5) == (off_t) -1 )
    FUNC_0 ("can't set position in PCH file: %m");

  return VAR_8;
}
