
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxsb_session {int ses_octx; int ses_ictx; struct auth_hash* ses_axf; } ;
struct auth_hash {int blocksize; int (* Update ) (int ,int*,int) ;int (* Init ) (int ) ;} ;
typedef int* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_6(struct glxsb_session *VAR_4, caddr_t VAR_5, int VAR_6)
{
 struct auth_hash *VAR_7;
 int VAR_8;

 VAR_6 /= 8;
 VAR_7 = VAR_4->ses_axf;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_5[VAR_8] ^= VAR_0;

 VAR_7->Init(VAR_4->ses_ictx);
 VAR_7->Update(VAR_4->ses_ictx, VAR_5, VAR_6);
 VAR_7->Update(VAR_4->ses_ictx, VAR_2, VAR_7->blocksize - VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_5[VAR_8] ^= (VAR_0 ^ VAR_1);

 VAR_7->Init(VAR_4->ses_octx);
 VAR_7->Update(VAR_4->ses_octx, VAR_5, VAR_6);
 VAR_7->Update(VAR_4->ses_octx, VAR_3, VAR_7->blocksize - VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_5[VAR_8] ^= VAR_1;
}
