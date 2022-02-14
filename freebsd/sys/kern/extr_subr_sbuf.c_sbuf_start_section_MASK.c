
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {scalar_t__ s_sect_len; int s_len; int s_rec_off; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,int ) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,int ) ;

void
FUNC_5(struct sbuf *VAR_1, ssize_t *VAR_2)
{

 FUNC_3(VAR_1);
 FUNC_4(VAR_1, 0);

 if (!FUNC_1(VAR_1)) {
  FUNC_0(VAR_1->s_sect_len == 0,
      ("s_sect_len != 0 when starting a section"));
  if (VAR_2 != ((void*)0))
   *VAR_2 = -1;
  VAR_1->s_rec_off = VAR_1->s_len;
  FUNC_2(VAR_1, VAR_0);
 } else {
  FUNC_0(VAR_2 != ((void*)0),
      ("s_sect_len should be saved when starting a subsection"));
  *VAR_2 = VAR_1->s_sect_len;
  VAR_1->s_sect_len = 0;
 }
}
