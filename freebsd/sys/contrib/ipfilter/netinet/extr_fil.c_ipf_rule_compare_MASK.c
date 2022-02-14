
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fr_cksum; scalar_t__ fr_size; scalar_t__ fr_dsize; char* fr_caddr; scalar_t__ fr_data; int fr_ifnames; int fr_func; } ;
typedef TYPE_1__ frentry_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,scalar_t__) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(frentry_t *VAR_5, frentry_t *VAR_6)
{
 int VAR_7;

 if (VAR_5->fr_cksum != VAR_6->fr_cksum)
  return (1);
 if (VAR_5->fr_size != VAR_6->fr_size)
  return (2);
 if (VAR_5->fr_dsize != VAR_6->fr_dsize)
  return (3);
 if (FUNC_3((char *)&VAR_5->fr_func, (char *)&VAR_6->fr_func, VAR_0)
     != 0)
  return (4);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->fr_ifnames); VAR_7++) {





  if (FUNC_2(VAR_2[VAR_7]))
   return(5);
 }

 if (FUNC_1(VAR_4))
  return (6);
 if (FUNC_1(VAR_3))
  return (7);
 if (FUNC_1(VAR_1))
  return (8);
 if (!VAR_5->fr_data && !VAR_6->fr_data)
  return (0);
 if (VAR_5->fr_data && VAR_6->fr_data) {
  if (FUNC_3(VAR_5->fr_caddr, VAR_6->fr_caddr, VAR_5->fr_dsize) == 0)
   return (0);
 }
 return (9);
}
