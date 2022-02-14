
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* body; } ;
struct tac_msg {int flags; unsigned char* session_id; unsigned char version; unsigned char seq_no; TYPE_2__ u; int length; } ;
struct tac_handle {size_t cur_server; TYPE_1__* servers; } ;
struct TYPE_3__ {char* secret; } ;
typedef int MD5_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,...) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(struct tac_handle *VAR_1, struct tac_msg *VAR_2)
{
 const char *VAR_3;
 MD5_CTX VAR_4;
 MD5_CTX VAR_5;
 unsigned char VAR_6[16];
 int VAR_7;
 int VAR_8;

 VAR_3 = VAR_1->servers[VAR_1->cur_server].secret;
 if (VAR_3[0] == '\0')
  VAR_2->flags |= VAR_0;
 if (VAR_2->flags & VAR_0)
  return;

 VAR_8 = FUNC_3(VAR_2->length);

 FUNC_1(&VAR_4);
 FUNC_2(&VAR_4, VAR_2->session_id, sizeof VAR_2->session_id);
 FUNC_2(&VAR_4, VAR_3, FUNC_4(VAR_3));
 FUNC_2(&VAR_4, &VAR_2->version, sizeof VAR_2->version);
 FUNC_2(&VAR_4, &VAR_2->seq_no, sizeof VAR_2->seq_no);

 VAR_5 = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 += sizeof VAR_6) {
  int VAR_9;
  int VAR_10;

  FUNC_0(VAR_6, &VAR_5);

  if ((VAR_9 = VAR_8 - VAR_7) > sizeof VAR_6)
   VAR_9 = sizeof VAR_6;
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
   VAR_2->u.body[VAR_7 + VAR_10] ^= VAR_6[VAR_10];

  VAR_5 = VAR_4;
  FUNC_2(&VAR_5, VAR_6, sizeof VAR_6);
 }
}
