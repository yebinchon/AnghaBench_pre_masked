
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int snd_wavefront_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,char*,int *) ;

__attribute__((used)) static int
FUNC_3 (snd_wavefront_t *VAR_1)

{
 char VAR_2[8];

 if (FUNC_2 (VAR_1, VAR_0, VAR_2, ((void*)0))) {
  FUNC_1 ("can't get memory stats.\n");
  return -1;
 } else {
  return FUNC_0 (VAR_2, 4);
 }
}
