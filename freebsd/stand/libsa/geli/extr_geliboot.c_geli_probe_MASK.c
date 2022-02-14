
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
typedef int const u_char ;
struct hmac_ctx {int dummy; } ;
struct TYPE_3__ {int sc_flags; int sc_ealgo; int sc_ivkey; int sc_ivctx; int sc_ekey; int sc_mkey; } ;
struct TYPE_4__ {scalar_t__ md_iterations; int const* md_salt; } ;
struct geli_dev {char* name; TYPE_1__ sc; TYPE_2__ md; } ;
typedef int mkey ;
typedef int key ;
typedef int dkey ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int const*,int ,int) ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (int const*,int ,int const*,int,int ,int ) ;
 int FUNC_5 (struct hmac_ctx*,int const*,int ) ;
 int FUNC_6 (struct hmac_ctx*,int *,int ) ;
 int FUNC_7 (struct hmac_ctx*,int const*,int) ;
 int FUNC_8 (TYPE_2__*,int const*,int const*,int *) ;
 int FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (struct geli_dev*,int const*) ;
 int FUNC_11 (int const**,int const*,int) ;
 int FUNC_12 (int const*,int,int const*,int,char const*,int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static int
FUNC_15(struct geli_dev *VAR_5, const char *VAR_6, u_char *VAR_7)
{
 u_char VAR_8[VAR_4], VAR_9[VAR_0], *VAR_10;
 u_int VAR_11;
 struct hmac_ctx VAR_12;
 int VAR_13;

 if (VAR_7 != ((void*)0)) {
  FUNC_11(&VAR_9, VAR_7, VAR_0);
  FUNC_3(VAR_7, VAR_0);
  goto found_key;
 }

 if (FUNC_10(VAR_5, VAR_9) == 0) {
  goto found_key;
 }

 FUNC_6(&VAR_12, ((void*)0), 0);



 if (VAR_5->md.md_iterations < 0) {

  return (1);
 } else if (VAR_5->md.md_iterations == 0) {
  FUNC_7(&VAR_12, VAR_5->md.md_salt,
      sizeof(VAR_5->md.md_salt));
  FUNC_7(&VAR_12, (const uint8_t *)VAR_6,
      FUNC_14(VAR_6));
 } else if (VAR_5->md.md_iterations > 0) {
  FUNC_13("Calculating GELI Decryption Key for %s %d"
      " iterations...\n", VAR_5->name, VAR_5->md.md_iterations);
  u_char VAR_14[VAR_4];

  FUNC_12(VAR_14, sizeof(VAR_14), VAR_5->md.md_salt,
      sizeof(VAR_5->md.md_salt), VAR_6,
      VAR_5->md.md_iterations);
  FUNC_7(&VAR_12, VAR_14, sizeof(VAR_14));
  FUNC_3(VAR_14, sizeof(VAR_14));
 }

 FUNC_5(&VAR_12, VAR_8, 0);

 VAR_13 = FUNC_8(&VAR_5->md, VAR_8, VAR_9, &VAR_11);
 if (VAR_13 == -1) {
  FUNC_3(VAR_9, sizeof(VAR_9));
  FUNC_3(VAR_8, sizeof(VAR_8));
  FUNC_13("Bad GELI key: bad password?\n");
  return (VAR_13);
 } else if (VAR_13 != 0) {
  FUNC_3(VAR_9, sizeof(VAR_9));
  FUNC_3(VAR_8, sizeof(VAR_8));
  FUNC_13("Failed to decrypt GELI master key: %d\n", VAR_13);
  return (VAR_13);
 } else {

  FUNC_9(VAR_8);
  FUNC_3(&VAR_8, sizeof(VAR_8));
 }

found_key:

 FUNC_2(VAR_9, VAR_5->sc.sc_mkey, sizeof(VAR_5->sc.sc_mkey));
 FUNC_2(VAR_9, VAR_5->sc.sc_ivkey, sizeof(VAR_5->sc.sc_ivkey));
 VAR_10 = VAR_9 + sizeof(VAR_5->sc.sc_ivkey);
 if ((VAR_5->sc.sc_flags & VAR_2) == 0) {
  FUNC_2(VAR_10, VAR_5->sc.sc_ekey, VAR_1);
 } else {



  FUNC_4(VAR_10, VAR_3, (const uint8_t *)"\x10", 1,
      VAR_5->sc.sc_ekey, 0);
 }
 FUNC_3(VAR_9, sizeof(VAR_9));


 switch (VAR_5->sc.sc_ealgo) {
 case 128:
  break;
 default:
  FUNC_0(&VAR_5->sc.sc_ivctx);
  FUNC_1(&VAR_5->sc.sc_ivctx, VAR_5->sc.sc_ivkey,
      sizeof(VAR_5->sc.sc_ivkey));
  break;
 }

 return (0);
}
