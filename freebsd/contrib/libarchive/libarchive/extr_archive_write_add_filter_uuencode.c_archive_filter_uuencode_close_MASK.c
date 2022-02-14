
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s; } ;
struct private_uuencode {scalar_t__ hold_len; TYPE_1__ encoded_buff; int hold; } ;
struct archive_write_filter {int next_filter; int archive; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct archive_write_filter *VAR_0)
{
 struct private_uuencode *VAR_1 = (struct private_uuencode *)VAR_0->data;
 int VAR_2, VAR_3;


 if (VAR_1->hold_len != 0)
  FUNC_5(&VAR_1->encoded_buff, VAR_1->hold, VAR_1->hold_len);
 FUNC_2(&VAR_1->encoded_buff, "`\nend\n");

 FUNC_4(VAR_0->archive, 1);
 VAR_2 = FUNC_1(VAR_0->next_filter,
     VAR_1->encoded_buff.s, FUNC_3(&VAR_1->encoded_buff));
 VAR_3 = FUNC_0(VAR_0->next_filter);
 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;
 return (VAR_2);
}
