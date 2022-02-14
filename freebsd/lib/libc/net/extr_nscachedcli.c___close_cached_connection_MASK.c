
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_connection_ {int write_queue; int read_queue; int sockfd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cached_connection_*) ;

void
FUNC_3(struct cached_connection_ *VAR_0)
{
 FUNC_1(VAR_0 != ((void*)0));

 FUNC_0(VAR_0->sockfd);
 FUNC_0(VAR_0->read_queue);
 FUNC_0(VAR_0->write_queue);
 FUNC_2(VAR_0);
}
