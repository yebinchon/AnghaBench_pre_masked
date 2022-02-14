
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int * buf; } ;
struct mlx4_buf {int nbufs; TYPE_2__ direct; TYPE_1__* page_list; } ;
struct TYPE_3__ {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page**) ;
 struct page** FUNC_1 (int,int ) ;
 struct page* FUNC_2 (int ) ;
 int * FUNC_3 (struct page**,int,int ,int ) ;

int FUNC_4(struct mlx4_buf *VAR_4)
{
 struct page **VAR_5;
 int VAR_6;



 if (VAR_4->direct.buf != ((void*)0) || VAR_4->nbufs == 1)
  return 0;

 VAR_5 = FUNC_1(sizeof *VAR_5 * VAR_4->nbufs, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->nbufs; ++VAR_6)
  VAR_5[VAR_6] = FUNC_2(VAR_4->page_list[VAR_6].buf);

 VAR_4->direct.buf = FUNC_3(VAR_5, VAR_4->nbufs, VAR_3, VAR_2);
 FUNC_0(VAR_5);
 if (!VAR_4->direct.buf)
  return -VAR_0;

 return 0;
}
