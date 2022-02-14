
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness {int w_displayed; scalar_t__ w_line; size_t w_index; int w_name; int * w_file; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct sbuf*,char*,int ,int ) ;
 struct witness* VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct sbuf *VAR_4, struct witness *VAR_5)
{
 int VAR_6;

 if (VAR_5->w_displayed != 0 || (VAR_5->w_file == ((void*)0) && VAR_5->w_line == 0))
  return;
 VAR_5->w_displayed = 1;

 FUNC_0(VAR_5->w_index);
 for (VAR_6 = 1; VAR_6 <= VAR_2; VAR_6++) {
  if (VAR_3[VAR_5->w_index][VAR_6] & VAR_0) {
   FUNC_1(VAR_4, "\"%s\",\"%s\"\n", VAR_5->w_name,
       VAR_1[VAR_6].w_name);
   FUNC_2(VAR_4, &VAR_1[VAR_6]);
  }
 }
}
