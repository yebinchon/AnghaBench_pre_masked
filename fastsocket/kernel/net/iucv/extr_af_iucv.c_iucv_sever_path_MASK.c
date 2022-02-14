
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_data ;
struct sock {int dummy; } ;
struct iucv_sock {int dst_name; int src_name; struct iucv_path* path; } ;
struct iucv_path {int dummy; } ;
struct TYPE_2__ {int (* path_sever ) (struct iucv_path*,unsigned char*) ;} ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (struct iucv_path*) ;
 struct iucv_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (unsigned char*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (struct iucv_path*,unsigned char*) ;
 int FUNC_6 (struct iucv_path*,unsigned char*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_1, int VAR_2)
{
 unsigned char VAR_3[16];
 struct iucv_sock *VAR_4 = FUNC_3(VAR_1);
 struct iucv_path *VAR_5 = VAR_4->path;

 if (VAR_4->path) {
  VAR_4->path = ((void*)0);
  if (VAR_2) {
   FUNC_4(VAR_3, VAR_4->src_name);
   FUNC_1(VAR_3, VAR_4->dst_name);
   FUNC_0(VAR_3, sizeof(VAR_3));
   VAR_0->path_sever(VAR_5, VAR_3);
  } else
   VAR_0->path_sever(VAR_5, ((void*)0));
  FUNC_2(VAR_5);
 }
}
