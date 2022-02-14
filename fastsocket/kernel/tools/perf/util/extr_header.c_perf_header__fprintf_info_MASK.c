
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_header {int dummy; } ;
struct perf_session {int fd; struct perf_header header; } ;
struct header_print_data {int full; int * fp; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct perf_header*,int,struct header_print_data*,int ) ;

int FUNC_1(struct perf_session *VAR_1, FILE *VAR_2, bool VAR_3)
{
 struct header_print_data VAR_4;
 struct perf_header *VAR_5 = &VAR_1->header;
 int VAR_6 = VAR_1->fd;
 VAR_4.fp = VAR_2;
 VAR_4.full = VAR_3;

 FUNC_0(VAR_5, VAR_6, &VAR_4,
          VAR_0);
 return 0;
}
