
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_print_data {char* member_0; } ;
struct base_stream {int (* fini ) (void*) ;int (* process ) (void*,int *) ;int m_sb_ptr; int (* init ) (void*) ;} ;
typedef int atf_process_status_t ;
typedef int atf_process_child_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ,int ,struct child_print_data*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (void*,int *) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static
void
FUNC_10(const struct base_stream *VAR_1, void *VAR_2,
        const struct base_stream *VAR_3, void *VAR_4)
{
    atf_process_child_t VAR_5;
    atf_process_status_t VAR_6;
    struct child_print_data VAR_7 = { "msg" };

    VAR_1->init(VAR_2);
    VAR_3->init(VAR_4);

    FUNC_0(FUNC_2(&VAR_5, VAR_0, VAR_1->m_sb_ptr,
                        VAR_3->m_sb_ptr, &VAR_7));
    if (VAR_1->process != ((void*)0))
        VAR_1->process(VAR_2, &VAR_5);
    if (VAR_3->process != ((void*)0))
        VAR_3->process(VAR_4, &VAR_5);
    FUNC_0(FUNC_1(&VAR_5, &VAR_6));

    VAR_1->fini(VAR_2);
    VAR_3->fini(VAR_4);

    FUNC_3(&VAR_6);
}
