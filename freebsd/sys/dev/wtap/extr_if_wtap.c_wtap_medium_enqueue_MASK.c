
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtap_vap {int id; int av_md; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int ,int ,struct mbuf*) ;

__attribute__((used)) static int
FUNC_1(struct wtap_vap *VAR_0, struct mbuf *VAR_1)
{

 return FUNC_0(VAR_0->av_md, VAR_0->id, VAR_1);
}
