
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {scalar_t__ sin_family; scalar_t__ sin_port; TYPE_2__ sin_addr; } ;
struct rad_server {int* secret; TYPE_3__ addr; } ;
struct rad_handle {size_t in_len; int* in; int* out; struct rad_server* servers; } ;
typedef int MD5_CTX ;
typedef int HMAC_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int *) ;
 int FUNC_5 (int *,int*,int,int ,int *) ;
 int FUNC_6 (int *,int*,size_t) ;
 size_t VAR_1 ;
 int FUNC_7 (unsigned char*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 (int*,unsigned char*,int) ;
 int FUNC_11 (int*,int*,int) ;
 int FUNC_12 (int*,int ,int) ;
 int FUNC_13 (int*) ;

__attribute__((used)) static int
FUNC_14(struct rad_handle *VAR_10, int VAR_11,
    const struct sockaddr_in *VAR_12)
{
 MD5_CTX VAR_13;
 unsigned char VAR_14[VAR_2];
 const struct rad_server *VAR_15;
 int VAR_16;







 VAR_15 = &VAR_10->servers[VAR_11];


 if (VAR_12->sin_family != VAR_15->addr.sin_family ||
     VAR_12->sin_addr.s_addr != VAR_15->addr.sin_addr.s_addr ||
     VAR_12->sin_port != VAR_15->addr.sin_port)
  return 0;


 if (VAR_10->in_len < VAR_4)
  return 0;
 VAR_16 = VAR_10->in[VAR_7] << 8 | VAR_10->in[VAR_7+1];
 if (VAR_16 > VAR_10->in_len)
  return 0;


 FUNC_8(&VAR_13);
 FUNC_9(&VAR_13, &VAR_10->in[VAR_6], VAR_5 - VAR_6);
 FUNC_9(&VAR_13, &VAR_10->out[VAR_5], VAR_1);
 FUNC_9(&VAR_13, &VAR_10->in[VAR_4], VAR_16 - VAR_4);
 FUNC_9(&VAR_13, VAR_15->secret, FUNC_13(VAR_15->secret));
 FUNC_7(VAR_14, &VAR_13);
 if (FUNC_10(&VAR_10->in[VAR_5], VAR_14, sizeof VAR_14) != 0)
  return 0;
 return 1;
}
