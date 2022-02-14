
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char* uint16_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct buf_pr {int dummy; } ;
struct TYPE_13__ {scalar_t__ s_addr; } ;
struct TYPE_10__ {char* sin_port; char* sin6_port; TYPE_9__ sin_addr; } ;
struct TYPE_11__ {TYPE_1__ sa; } ;
typedef TYPE_2__ ipfw_insn_sa6 ;
typedef TYPE_2__ ipfw_insn_sa ;
struct TYPE_12__ {scalar_t__ opcode; } ;
typedef TYPE_4__ ipfw_insn ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct buf_pr*,char*,...) ;
 scalar_t__ FUNC_1 (struct sockaddr const*,int,char*,int,int *,int ,int ) ;
 char* FUNC_2 (TYPE_9__) ;
 TYPE_2__* FUNC_3 (TYPE_4__ const*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct buf_pr *VAR_5, const ipfw_insn *VAR_6)
{
 char VAR_7[VAR_2 + VAR_0 + 2];
 ipfw_insn_sa6 *VAR_8;
 ipfw_insn_sa *VAR_9;
 uint16_t VAR_10;

 if (VAR_6->opcode == VAR_4) {
  VAR_9 = FUNC_3(VAR_6, VAR_9);
  VAR_10 = VAR_9->sa.sin_port;
  if (VAR_9->sa.sin_addr.s_addr == VAR_1)
   FUNC_0(VAR_5, "fwd tablearg");
  else
   FUNC_0(VAR_5, "fwd %s", FUNC_2(VAR_9->sa.sin_addr));
 } else {
  VAR_8 = FUNC_3(VAR_6, VAR_8);
  VAR_10 = VAR_8->sa.sin6_port;
  FUNC_0(VAR_5, "fwd ");
  if (FUNC_1((const struct sockaddr *)&VAR_8->sa,
      sizeof(struct sockaddr_in6), VAR_7, sizeof(VAR_7), ((void*)0), 0,
      VAR_3) == 0)
   FUNC_0(VAR_5, "%s", VAR_7);
 }
 if (VAR_10 != 0)
  FUNC_0(VAR_5, ",%u", VAR_10);
}
