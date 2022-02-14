
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_seq_request; int sc_seq_done; } ;


 int FUNC_0 (struct nilfs_sc_info*) ;

__attribute__((used)) static int FUNC_1(struct nilfs_sc_info *VAR_0)
{
 VAR_0->sc_seq_done = VAR_0->sc_seq_request;

 return FUNC_0(VAR_0);
}
