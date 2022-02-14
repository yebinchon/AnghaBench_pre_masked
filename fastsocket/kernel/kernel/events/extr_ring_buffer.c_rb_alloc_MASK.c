
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int nr_pages; void* user_page; void** data_pages; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct ring_buffer*) ;
 struct ring_buffer* FUNC_2 (unsigned long,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ring_buffer*,long,int) ;

struct ring_buffer *FUNC_5(int VAR_1, long VAR_2, int VAR_3, int VAR_4)
{
 struct ring_buffer *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = sizeof(struct ring_buffer);
 VAR_6 += VAR_1 * sizeof(void *);

 VAR_5 = FUNC_2(VAR_6, VAR_0);
 if (!VAR_5)
  goto fail;

 VAR_5->user_page = FUNC_3(VAR_3);
 if (!VAR_5->user_page)
  goto fail_user_page;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5->data_pages[VAR_7] = FUNC_3(VAR_3);
  if (!VAR_5->data_pages[VAR_7])
   goto fail_data_pages;
 }

 VAR_5->nr_pages = VAR_1;

 FUNC_4(VAR_5, VAR_2, VAR_4);

 return VAR_5;

fail_data_pages:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_0((unsigned long)VAR_5->data_pages[VAR_7]);

 FUNC_0((unsigned long)VAR_5->user_page);

fail_user_page:
 FUNC_1(VAR_5);

fail:
 return ((void*)0);
}
