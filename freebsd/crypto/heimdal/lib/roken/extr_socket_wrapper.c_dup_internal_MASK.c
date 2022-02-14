
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int fd; int io; int peername_len; void* peername; int myname_len; void* myname; void* tmp_path; void* path; int bcast; int bound; int protocol; int type; int family; } ;


 int FUNC_0 (int ,struct socket_info*) ;
 scalar_t__ FUNC_1 (int,int) ;
 void* FUNC_2 (void*,int ) ;
 int VAR_0 ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static int
FUNC_4(const struct socket_info *VAR_1, int VAR_2)
{
 struct socket_info *VAR_3;

 VAR_3 = (struct socket_info *)FUNC_1(1, sizeof(struct socket_info));

 VAR_3->fd = VAR_2;

 VAR_3->family = VAR_1->family;
 VAR_3->type = VAR_1->type;
 VAR_3->protocol = VAR_1->protocol;
 VAR_3->bound = VAR_1->bound;
 VAR_3->bcast = VAR_1->bcast;
 if (VAR_1->path)
  VAR_3->path = FUNC_3(VAR_1->path);
 if (VAR_1->tmp_path)
  VAR_3->tmp_path = FUNC_3(VAR_1->tmp_path);
 VAR_3->myname =
     FUNC_2(VAR_1->myname, VAR_1->myname_len);
 VAR_3->myname_len = VAR_1->myname_len;
 VAR_3->peername =
     FUNC_2(VAR_1->peername, VAR_1->peername_len);
 VAR_3->peername_len = VAR_1->peername_len;

 VAR_3->io = VAR_1->io;

 FUNC_0(VAR_0, VAR_3);

 return VAR_2;
}
